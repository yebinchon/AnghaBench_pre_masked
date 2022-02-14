
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rbuf ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {int timeline; } ;
typedef TYPE_1__ TimeLineHistoryCmd ;
struct TYPE_5__ {char* data; } ;
typedef int StringInfoData ;
typedef int Size ;
typedef TYPE_2__ PGAlignedBlock ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_10 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,...) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,char) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int,char*,int) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void
FUNC_19(TimeLineHistoryCmd *VAR_11)
{
 StringInfoData VAR_12;
 char VAR_13[VAR_3];
 char VAR_14[VAR_4];
 int VAR_15;
 off_t VAR_16;
 off_t VAR_17;
 Size VAR_18;






 FUNC_2(VAR_13, VAR_11->timeline);
 FUNC_3(VAR_14, VAR_11->timeline);


 FUNC_11(&VAR_12, 'T');
 FUNC_14(&VAR_12, 2);


 FUNC_16(&VAR_12, "filename");
 FUNC_15(&VAR_12, 0);
 FUNC_14(&VAR_12, 0);
 FUNC_15(&VAR_12, VAR_9);
 FUNC_14(&VAR_12, -1);
 FUNC_15(&VAR_12, 0);
 FUNC_14(&VAR_12, 0);


 FUNC_16(&VAR_12, "content");
 FUNC_15(&VAR_12, 0);
 FUNC_14(&VAR_12, 0);
 FUNC_15(&VAR_12, VAR_0);
 FUNC_14(&VAR_12, -1);
 FUNC_15(&VAR_12, 0);
 FUNC_14(&VAR_12, 0);
 FUNC_12(&VAR_12);


 FUNC_11(&VAR_12, 'D');
 FUNC_14(&VAR_12, 2);
 VAR_18 = FUNC_18(VAR_13);
 FUNC_15(&VAR_12, VAR_18);
 FUNC_13(&VAR_12, VAR_13, VAR_18);

 VAR_15 = FUNC_1(VAR_14, VAR_5 | VAR_6);
 if (VAR_15 < 0)
  FUNC_4(VAR_2,
    (FUNC_6(),
     FUNC_7("could not open file \"%s\": %m", VAR_14)));


 VAR_16 = FUNC_8(VAR_15, 0, VAR_7);
 if (VAR_16 < 0)
  FUNC_4(VAR_2,
    (FUNC_6(),
     FUNC_7("could not seek to end of file \"%s\": %m", VAR_14)));
 if (FUNC_8(VAR_15, 0, VAR_8) != 0)
  FUNC_4(VAR_2,
    (FUNC_6(),
     FUNC_7("could not seek to beginning of file \"%s\": %m", VAR_14)));

 FUNC_15(&VAR_12, VAR_16);

 VAR_17 = VAR_16;
 while (VAR_17 > 0)
 {
  PGAlignedBlock VAR_19;
  int VAR_20;

  FUNC_10(VAR_10);
  VAR_20 = FUNC_17(VAR_15, VAR_19.data, sizeof(VAR_19));
  FUNC_9();
  if (VAR_20 < 0)
   FUNC_4(VAR_2,
     (FUNC_6(),
      FUNC_7("could not read file \"%s\": %m",
       VAR_14)));
  else if (VAR_20 == 0)
   FUNC_4(VAR_2,
     (FUNC_5(VAR_1),
      FUNC_7("could not read file \"%s\": read %d of %zu",
       VAR_14, VAR_20, (Size) VAR_17)));

  FUNC_13(&VAR_12, VAR_19.data, VAR_20);
  VAR_17 -= VAR_20;
 }

 if (FUNC_0(VAR_15) != 0)
  FUNC_4(VAR_2,
    (FUNC_6(),
     FUNC_7("could not close file \"%s\": %m", VAR_14)));

 FUNC_12(&VAR_12);
}
