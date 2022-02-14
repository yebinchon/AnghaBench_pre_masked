
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buff ;
struct TYPE_4__ {char* cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int INT ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__,char*,int,scalar_t__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,char*,scalar_t__,scalar_t__*,int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,int ,int) ;

int FUNC_13 (int VAR_8, char **VAR_9)
{
 INT VAR_10;
 HANDLE VAR_11;
 HANDLE VAR_12, VAR_13, VAR_14;
 char VAR_15[VAR_0];
 DWORD VAR_16,VAR_17;
 BOOL VAR_18;
 WIN32_FIND_DATA VAR_19;

 VAR_12 = FUNC_7(VAR_6);
 VAR_13 = FUNC_7(VAR_7);

 if (VAR_8 == 2 && FUNC_12 (VAR_9[1], FUNC_11("/?"), 2) == 0)
 {
  FUNC_2(FUNC_11("copy stdin to stdout and then files to stdout\n"
                "\n"
                "Y [files]\n"
                "\n"
                "files         files to copy to stdout"));
  return 0;
 }


 do
 {
  VAR_18 = FUNC_8(VAR_12,VAR_15,sizeof(VAR_15),&VAR_16,((void*)0));

  if (VAR_16>0 && VAR_18)
   FUNC_10(VAR_13,VAR_15,VAR_16,&VAR_17,((void*)0));

 } while(VAR_16>0 && VAR_18);



 FUNC_9(0);

 for (VAR_10 = 1; VAR_10 < VAR_8; VAR_10++)
 {
  VAR_11=FUNC_5(VAR_9[VAR_10],&VAR_19);

  if (VAR_11==VAR_4)
  {
   FUNC_1("File not found - %s\n",VAR_9[VAR_10]);
   continue;
  }

  do
  {
   VAR_14 = FUNC_3(VAR_19.cFileName,
    VAR_3,
    VAR_2,((void*)0),
    VAR_5,
    VAR_1,((void*)0));

   if(VAR_14 == VAR_4)
   {
    FUNC_1("File not found - %s\n",VAR_19.cFileName);
    continue;
   }

   do
   {
    VAR_18 = FUNC_8(VAR_14,VAR_15,sizeof(VAR_15),&VAR_16,((void*)0));

    if (VAR_16>0 && VAR_18)
     FUNC_10(VAR_13,VAR_15,VAR_16,&VAR_17,((void*)0));

   } while(VAR_16>0 && VAR_18);

   FUNC_0(VAR_14);

  }
  while(FUNC_6(VAR_11,&VAR_19));

  FUNC_4(VAR_11);
 }

 return 0;
}
