
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {short* Data4; int Data3; int Data2; int Data1; } ;
typedef TYPE_1__ GUID ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*,char*,int *,int *,int *,short*) ;
 short FUNC_4 (char*,int *,int) ;

__attribute__((used)) static BOOL FUNC_5(const char *VAR_2, GUID *VAR_3)
{
  char VAR_4[3];
  int VAR_5;
  short VAR_6;

  if(FUNC_3(VAR_2, "%x-%hx-%hx-%hx", &VAR_3->Data1, &VAR_3->Data2, &VAR_3->Data3, &VAR_6) != 4) {
    FUNC_0("Can't parse guid %s\n", FUNC_1(VAR_3));
    return VAR_0;
  }

  VAR_3->Data4[0] = VAR_6 >> 8;
  VAR_3->Data4[1] = VAR_6 & 0xff;

  VAR_4[2] = '\0';
  for(VAR_5 = 0; VAR_5 < 6; VAR_5++) {
    FUNC_2(VAR_4, VAR_2 + 24 + 2 * VAR_5, 2);
    VAR_3->Data4[VAR_5 + 2] = FUNC_4(VAR_4, ((void*)0), 16);
  }
  return VAR_1;
}
