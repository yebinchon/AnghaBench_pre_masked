
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_request {char* buf; int item; } ;
struct cache_detail {int (* cache_request ) (struct cache_detail*,int ,char**,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_detail*,int ,char**,int*) ;

__attribute__((used)) static int FUNC_1(struct cache_detail *VAR_2,
          struct cache_request *VAR_3)
{
 char *VAR_4 = VAR_3->buf;
 int VAR_5 = VAR_1;

 VAR_2->cache_request(VAR_2, VAR_3->item, &VAR_4, &VAR_5);
 if (VAR_5 < 0)
  return -VAR_0;
 return VAR_1 - VAR_5;
}
