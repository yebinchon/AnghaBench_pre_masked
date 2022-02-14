
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int dummy; } ;
struct fdarray {int nr_alloc; struct pollfd* priv; struct pollfd* entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct pollfd*) ;
 void* FUNC_1 (struct pollfd*,size_t) ;

int FUNC_2(struct fdarray *VAR_1, int VAR_2)
{
 void *VAR_3;
 int VAR_4 = VAR_1->nr_alloc + VAR_2;
 size_t VAR_5 = sizeof(VAR_1->priv[0]) * VAR_4;
 size_t VAR_6 = sizeof(struct pollfd) * VAR_4;
 struct pollfd *VAR_7 = FUNC_1(VAR_1->entries, VAR_6);

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1->priv, VAR_5);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_7);
  return -VAR_0;
 }

 VAR_1->nr_alloc = VAR_4;
 VAR_1->entries = VAR_7;
 VAR_1->priv = VAR_3;
 return 0;
}
