
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ data_checksum_version; } ;
struct TYPE_8__ {TYPE_1__ controldata; } ;
struct TYPE_7__ {char* data; } ;
struct TYPE_6__ {int pd_checksum; } ;
typedef char PageHeaderData ;
typedef TYPE_2__* PageHeader ;
typedef TYPE_3__ PGAlignedBlock ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_4__ VAR_12 ;
 int FUNC_3 (char const*,int,int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,char const*,char const*,char const*,...) ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int,char*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,char*,int) ;

void
FUNC_9(const char *VAR_14, const char *VAR_15,
      const char *VAR_16, const char *VAR_17)
{
 int VAR_18;
 int VAR_19;
 PGAlignedBlock VAR_20;
 PGAlignedBlock VAR_21;
 ssize_t VAR_22 = 0;
 ssize_t VAR_23;
 int VAR_24;
 BlockNumber VAR_25 = 0;
 struct stat VAR_26;


 VAR_24 = (VAR_2 - VAR_9) / 2;

 if ((VAR_18 = FUNC_3(VAR_14, VAR_6 | VAR_8, 0)) < 0)
  FUNC_5("error while copying relation \"%s.%s\": could not open file \"%s\": %s\n",
     VAR_16, VAR_17, VAR_14, FUNC_7(VAR_11));

 if (FUNC_1(VAR_18, &VAR_26) != 0)
  FUNC_5("error while copying relation \"%s.%s\": could not stat file \"%s\": %s\n",
     VAR_16, VAR_17, VAR_14, FUNC_7(VAR_11));

 if ((VAR_19 = FUNC_3(VAR_15, VAR_7 | VAR_4 | VAR_5 | VAR_8,
        VAR_13)) < 0)
  FUNC_5("error while copying relation \"%s.%s\": could not create file \"%s\": %s\n",
     VAR_16, VAR_17, VAR_15, FUNC_7(VAR_11));


 VAR_23 = VAR_26.st_size;







 while (VAR_22 < VAR_23)
 {
  ssize_t VAR_27;
  char *VAR_28;
  char *VAR_29;
  char *VAR_30;
  PageHeaderData VAR_31;
  bool VAR_32;

  if ((VAR_27 = FUNC_6(VAR_18, VAR_20.data, VAR_2)) != VAR_2)
  {
   if (VAR_27 < 0)
    FUNC_5("error while copying relation \"%s.%s\": could not read file \"%s\": %s\n",
       VAR_16, VAR_17, VAR_14, FUNC_7(VAR_11));
   else
    FUNC_5("error while copying relation \"%s.%s\": partial page found in file \"%s\"\n",
       VAR_16, VAR_17, VAR_14);
  }

  VAR_22 += VAR_2;
  VAR_32 = (VAR_22 == VAR_23);


  FUNC_2(&VAR_31, VAR_20.data, VAR_9);







  VAR_28 = VAR_20.data + VAR_9;
  VAR_30 = VAR_20.data + VAR_27;
  VAR_29 = VAR_28 + VAR_24;

  while (VAR_29 <= VAR_30)
  {
   char *VAR_33;
   bool VAR_34 = 1;
   bool VAR_35;


   FUNC_2(VAR_21.data, &VAR_31, VAR_9);


   VAR_35 = VAR_32 && (VAR_29 == VAR_30);

   VAR_33 = VAR_21.data + VAR_9;


   while (VAR_28 < VAR_29)
   {
    uint8 VAR_36 = *(uint8 *) VAR_28;
    uint16 VAR_37 = 0;
    int VAR_38;


    for (VAR_38 = 0; VAR_38 < VAR_0; VAR_38++)
    {
     if (VAR_36 & (1 << VAR_38))
     {
      VAR_34 = 0;
      VAR_37 |=
       VAR_10 << (VAR_1 * VAR_38);
     }
    }


    VAR_33[0] = (char) (VAR_37 & 0xFF);
    VAR_33[1] = (char) (VAR_37 >> 8);

    VAR_28++;
    VAR_33 += VAR_1;
   }


   if (VAR_35 && VAR_34)
    break;


   if (VAR_12.controldata.data_checksum_version != 0)
    ((PageHeader) VAR_21.data)->pd_checksum =
     FUNC_4(VAR_21.data, VAR_25);

   VAR_11 = 0;
   if (FUNC_8(VAR_19, VAR_21.data, VAR_2) != VAR_2)
   {

    if (VAR_11 == 0)
     VAR_11 = VAR_3;
    FUNC_5("error while copying relation \"%s.%s\": could not write file \"%s\": %s\n",
       VAR_16, VAR_17, VAR_15, FUNC_7(VAR_11));
   }


   VAR_29 += VAR_24;
   VAR_25++;
  }
 }


 FUNC_0(VAR_19);
 FUNC_0(VAR_18);
}
