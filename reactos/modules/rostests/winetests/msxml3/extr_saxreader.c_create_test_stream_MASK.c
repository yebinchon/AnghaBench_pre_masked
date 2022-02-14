
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_6__ {scalar_t__ QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;


 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,TYPE_2__,int ,int *) ;
 int FUNC_2 (int *,TYPE_1__) ;
 int FUNC_3 (int *,char const*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static IStream *FUNC_5(const char *VAR_2, int VAR_3)
{
     ULARGE_INTEGER VAR_4;
     LARGE_INTEGER VAR_5;
     IStream *VAR_6;
     ULONG VAR_7;

     if (VAR_3 == -1) VAR_3 = FUNC_4(VAR_2);
     FUNC_0(((void*)0), VAR_1, &VAR_6);
     VAR_4.QuadPart = VAR_3;
     FUNC_2(VAR_6, VAR_4);
     FUNC_3(VAR_6, VAR_2, VAR_3, &VAR_7);
     VAR_5.QuadPart = 0;
     FUNC_1(VAR_6, VAR_5, VAR_0, ((void*)0));

     return VAR_6;
}
