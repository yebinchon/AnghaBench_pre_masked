
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ len; char const* name; } ;
typedef TYPE_1__ ltree_level ;
struct TYPE_13__ {int numlevel; } ;
struct TYPE_12__ {char* operand; TYPE_7__* node; } ;
struct TYPE_11__ {int distance; int flag; scalar_t__ length; } ;
typedef TYPE_2__ ITEM ;
typedef TYPE_3__ CHKVAL ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,scalar_t__,int (*) (char const*,char const*,size_t),int) ;
 int FUNC_3 (char const*,char const*,size_t) ;
 int FUNC_4 (char const*,char const*,size_t) ;
 int FUNC_5 (char const*,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_6(void *VAR_3, ITEM *VAR_4)
{
 ltree_level *VAR_5 = FUNC_1(((CHKVAL *) VAR_3)->node);
 int VAR_6 = ((CHKVAL *) VAR_3)->node->numlevel;
 char *VAR_7 = ((CHKVAL *) VAR_3)->operand + VAR_4->distance;
 int (*VAR_8) (const char *, const char *, size_t);

 VAR_8 = (VAR_4->flag & VAR_1) ? FUNC_3 : FUNC_4;
 while (VAR_6 > 0)
 {
  if (VAR_4->flag & VAR_2)
  {
   if (FUNC_2(VAR_5, VAR_7, VAR_4->length, VAR_8, (VAR_4->flag & VAR_0)))
    return 1;
  }
  else if (
     (
      VAR_4->length == VAR_5->len ||
      (VAR_5->len > VAR_4->length && (VAR_4->flag & VAR_0))
      ) &&
     (*VAR_8) (VAR_7, VAR_5->name, VAR_4->length) == 0)
   return 1;

  VAR_6--;
  VAR_5 = FUNC_0(VAR_5);
 }

 return 0;
}
