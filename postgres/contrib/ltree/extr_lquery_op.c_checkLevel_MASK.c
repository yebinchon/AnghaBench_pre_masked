
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ len; char const* name; } ;
typedef TYPE_1__ ltree_level ;
struct TYPE_12__ {int flag; char const* name; scalar_t__ len; } ;
typedef TYPE_2__ lquery_variant ;
struct TYPE_13__ {int numvar; } ;
typedef TYPE_3__ lquery_level ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,scalar_t__,int (*) (char const*,char const*,size_t),int) ;
 int FUNC_3 (char const*,char const*,size_t) ;
 int FUNC_4 (char const*,char const*,size_t) ;
 int FUNC_5 (char const*,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_6(lquery_level *VAR_3, ltree_level *VAR_4)
{
 int (*VAR_5) (const char *, const char *, size_t);
 lquery_variant *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->numvar; VAR_7++)
 {
  VAR_5 = (VAR_6->flag & VAR_1) ? FUNC_3 : FUNC_4;

  if (VAR_6->flag & VAR_2)
  {
   if (FUNC_2(VAR_4, VAR_6->name, VAR_6->len, VAR_5, (VAR_6->flag & VAR_0)))
    return 1;
  }
  else if (
     (
      VAR_6->len == VAR_4->len ||
      (VAR_4->len > VAR_6->len && (VAR_6->flag & VAR_0))
      ) &&
     (*VAR_5) (VAR_6->name, VAR_4->name, VAR_6->len) == 0)
  {

   return 1;
  }
  VAR_6 = FUNC_1(VAR_6);
 }
 return 0;
}
