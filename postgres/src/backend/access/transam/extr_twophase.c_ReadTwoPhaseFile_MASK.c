
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct stat {int st_size; } ;
typedef int pg_crc32c ;
typedef int TwoPhaseRecordOnDisk ;
struct TYPE_2__ {scalar_t__ magic; int total_len; } ;
typedef TYPE_1__ TwoPhaseFileHeader ;
typedef int TransactionId ;
typedef int Size ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (char*,int ) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (char*,char*,int ,char*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_13 (int,struct stat*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,char*,int) ;

__attribute__((used)) static char *
FUNC_18(TransactionId VAR_10, bool VAR_11)
{
 char VAR_12[VAR_3];
 char *VAR_13;
 TwoPhaseFileHeader *VAR_14;
 int VAR_15;
 struct stat VAR_16;
 uint32 VAR_17;
 pg_crc32c VAR_18,
    VAR_19;
 int VAR_20;

 FUNC_7(VAR_12, VAR_10);

 VAR_15 = FUNC_6(VAR_12, VAR_5 | VAR_6);
 if (VAR_15 < 0)
 {
  if (VAR_11 && VAR_9 == VAR_0)
   return ((void*)0);

  FUNC_8(VAR_2,
    (FUNC_10(),
     FUNC_11("could not open file \"%s\": %m", VAR_12)));
 }







 if (FUNC_13(VAR_15, &VAR_16))
  FUNC_8(VAR_2,
    (FUNC_10(),
     FUNC_11("could not stat file \"%s\": %m", VAR_12)));

 if (VAR_16.st_size < (FUNC_5(sizeof(TwoPhaseFileHeader)) +
      FUNC_5(sizeof(TwoPhaseRecordOnDisk)) +
      sizeof(pg_crc32c)) ||
  VAR_16.st_size > VAR_4)
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_12("incorrect size of file \"%s\": %zu byte",
          "incorrect size of file \"%s\": %zu bytes",
          (Size) VAR_16.st_size, VAR_12,
          (Size) VAR_16.st_size)));

 VAR_17 = VAR_16.st_size - sizeof(pg_crc32c);
 if (VAR_17 != FUNC_5(VAR_17))
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_11("incorrect alignment of CRC offset for file \"%s\"",
      VAR_12)));




 VAR_13 = (char *) FUNC_14(VAR_16.st_size);

 FUNC_16(VAR_8);
 VAR_20 = FUNC_17(VAR_15, VAR_13, VAR_16.st_size);
 if (VAR_20 != VAR_16.st_size)
 {
  if (VAR_20 < 0)
   FUNC_8(VAR_2,
     (FUNC_10(),
      FUNC_11("could not read file \"%s\": %m", VAR_12)));
  else
   FUNC_8(VAR_2,
     (FUNC_11("could not read file \"%s\": read %d of %zu",
       VAR_12, VAR_20, (Size) VAR_16.st_size)));
 }

 FUNC_15();

 if (FUNC_1(VAR_15) != 0)
  FUNC_8(VAR_2,
    (FUNC_10(),
     FUNC_11("could not close file \"%s\": %m", VAR_12)));

 VAR_14 = (TwoPhaseFileHeader *) VAR_13;
 if (VAR_14->magic != VAR_7)
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_11("invalid magic number stored in file \"%s\"",
      VAR_12)));

 if (VAR_14->total_len != VAR_16.st_size)
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_11("invalid size stored in file \"%s\"",
      VAR_12)));

 FUNC_4(VAR_18);
 FUNC_0(VAR_18, VAR_13, VAR_17);
 FUNC_3(VAR_18);

 VAR_19 = *((pg_crc32c *) (VAR_13 + VAR_17));

 if (!FUNC_2(VAR_18, VAR_19))
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_11("calculated CRC checksum does not match value stored in file \"%s\"",
      VAR_12)));

 return VAR_13;
}
