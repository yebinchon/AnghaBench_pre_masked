
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int re; } ;
typedef TYPE_1__ zend_regexp_list ;
typedef int zend_bool ;
struct TYPE_5__ {TYPE_1__* regexp_list; } ;
typedef TYPE_2__ zend_blacklist ;
typedef int pcre2_match_data ;
typedef int pcre2_match_context ;
typedef int PCRE2_SPTR ;


 int FUNC_0 (int ,int ,size_t,int ,int ,int *,int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;

zend_bool FUNC_4(zend_blacklist *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;
 zend_regexp_list *VAR_4 = VAR_0->regexp_list;
 pcre2_match_context *VAR_5 = FUNC_3();

 if (VAR_4 == ((void*)0)) {
  return 0;
 }
 while (VAR_4 != ((void*)0)) {
  pcre2_match_data *VAR_6 = FUNC_1(0, VAR_4->re);
  if (!VAR_6) {

   continue;
  }
  int VAR_7 = FUNC_0(VAR_4->re, (PCRE2_SPTR)VAR_1, VAR_2, 0, 0, VAR_6, VAR_5);
  if (VAR_7 >= 0) {
   VAR_3 = 1;
   FUNC_2(VAR_6);
   break;
  }
  FUNC_2(VAR_6);
  VAR_4 = VAR_4->next;
 }
 return VAR_3;
}
