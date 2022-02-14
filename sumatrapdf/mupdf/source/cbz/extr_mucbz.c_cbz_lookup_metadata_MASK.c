
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_document ;
typedef int fz_context ;
struct TYPE_2__ {int arch; } ;
typedef TYPE_1__ cbz_document ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(fz_context *VAR_0, fz_document *VAR_1, const char *VAR_2, char *VAR_3, int VAR_4)
{
 cbz_document *VAR_5 = (cbz_document*)VAR_1;
 if (!FUNC_2(VAR_2, "format"))
  return (int) FUNC_1(VAR_3, FUNC_0(VAR_0, VAR_5->arch), VAR_4);
 return -1;
}
