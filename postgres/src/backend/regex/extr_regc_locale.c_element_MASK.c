
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int dummy; } ;
struct cname {int code; int * name; } ;
typedef int const chr ;


 int const FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 struct cname* VAR_2 ;
 scalar_t__ FUNC_4 (int *,int const*,size_t) ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static chr
FUNC_6(struct vars *VAR_3,
  const chr *VAR_4,
  const chr *VAR_5)
{
 const struct cname *VAR_6;
 size_t VAR_7;


 FUNC_3(VAR_4 < VAR_5);
 VAR_7 = VAR_5 - VAR_4;
 if (VAR_7 == 1)
  return *VAR_4;

 FUNC_2(VAR_1);


 for (VAR_6 = VAR_2; VAR_6->name != ((void*)0); VAR_6++)
 {
  if (FUNC_5(VAR_6->name) == VAR_7 &&
   FUNC_4(VAR_6->name, VAR_4, VAR_7) == 0)
  {
   break;
  }
 }
 if (VAR_6->name != ((void*)0))
  return FUNC_0(VAR_6->code);


 FUNC_1(VAR_0);
 return 0;
}
