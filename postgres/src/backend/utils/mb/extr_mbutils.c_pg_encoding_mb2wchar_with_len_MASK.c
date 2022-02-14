
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pg_wchar ;
struct TYPE_2__ {int (* mb2wchar_with_len ) (unsigned char const*,int *,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned char const*,int *,int) ;

int
FUNC_1(int VAR_1,
         const char *VAR_2, pg_wchar *VAR_3, int VAR_4)
{
 return VAR_0[VAR_1].mb2wchar_with_len((const unsigned char *) VAR_2, VAR_3, VAR_4);
}
