
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_cache {int fd; int entries; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct probe_cache* FUNC_1 (int) ;

__attribute__((used)) static struct probe_cache *FUNC_2(void)
{
 struct probe_cache *VAR_1 = FUNC_1(sizeof(*VAR_1));

 if (VAR_1) {
  FUNC_0(&VAR_1->entries);
  VAR_1->fd = -VAR_0;
 }
 return VAR_1;
}
