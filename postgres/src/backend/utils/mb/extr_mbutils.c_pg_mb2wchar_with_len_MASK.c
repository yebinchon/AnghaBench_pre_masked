
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pg_wchar ;
struct TYPE_4__ {size_t encoding; } ;
struct TYPE_3__ {int (* mb2wchar_with_len ) (unsigned char const*,int *,int) ;} ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned char const*,int *,int) ;

int
FUNC_1(const char *VAR_2, pg_wchar *VAR_3, int VAR_4)
{
 return VAR_1[VAR_0->encoding].mb2wchar_with_len((const unsigned char *) VAR_2, VAR_3, VAR_4);
}
