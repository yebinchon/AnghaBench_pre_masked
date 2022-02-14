
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gzFile ;




 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (int *,int,int,int,char**) ;

int FUNC_10(int VAR_2,char **VAR_3)
{
    int VAR_4 = 129;
    int VAR_5 = 1;
    char *VAR_6;
    gzFile *VAR_7;

    VAR_0 = FUNC_8(VAR_3[0],'\\');
    if (VAR_0 == ((void*)0))
      {
        VAR_0 = FUNC_8(VAR_3[0],'/');
        if (VAR_0 == ((void*)0))
          {
            VAR_0 = FUNC_8(VAR_3[0],':');
            if (VAR_0 == ((void*)0))
              VAR_0 = VAR_3[0];
            else
              VAR_0++;
          }
        else
          VAR_0++;
      }
    else
      VAR_0++;

    if (VAR_2 == 1)
      FUNC_6(0);

    if (FUNC_7(VAR_3[VAR_5],"-l") == 0)
      {
        VAR_4 = 128;
        if (VAR_2 == ++VAR_5)
          FUNC_6(0);
      }
    else if (FUNC_7(VAR_3[VAR_5],"-h") == 0)
      {
        FUNC_6(0);
      }

    if ((VAR_6 = FUNC_0(VAR_3[VAR_5])) == ((void*)0))
      FUNC_1(VAR_3[VAR_5]);

    ++VAR_5;
    if ((VAR_4 == 128) && (VAR_5 != VAR_2))
      FUNC_6(1);




    switch(VAR_4)
      {
      case 128:
      case 129:
        VAR_7 = FUNC_5(VAR_6,"rb");
        if (VAR_7 == ((void*)0))
          {
            FUNC_4(VAR_1,"%s: Couldn't gzopen %s\n",VAR_0,VAR_6);
            return 1;
          }
        FUNC_3(FUNC_9(VAR_7, VAR_4, VAR_5, VAR_2, VAR_3));
      break;

      default:
        FUNC_2("Unknown option");
        FUNC_3(1);
      }

    return 0;
}
