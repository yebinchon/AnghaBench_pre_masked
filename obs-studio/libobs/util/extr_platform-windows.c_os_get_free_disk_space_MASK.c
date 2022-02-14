
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint64_t ;
struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;


 int FUNC_0 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int **) ;

uint64_t FUNC_3(const char *VAR_0)
{
 wchar_t *VAR_1 = ((void*)0);
 if (!FUNC_2(VAR_0, 0, &VAR_1))
  return 0;

 ULARGE_INTEGER VAR_2;
 bool VAR_3 = !!FUNC_0(VAR_1, &VAR_2, ((void*)0), ((void*)0));
 FUNC_1(VAR_1);

 return VAR_3 ? VAR_2.QuadPart : 0;
}
