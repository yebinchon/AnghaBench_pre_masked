
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iucv_path {int dummy; } ;
struct iucv_message {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct iucv_path*,struct iucv_message*,int ,void*,size_t,size_t*) ;
 int FUNC_1 (struct iucv_path*,struct iucv_message*,int ,void*,size_t,size_t*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct iucv_path *VAR_1, struct iucv_message *VAR_2,
    u8 VAR_3, void *VAR_4, size_t VAR_5, size_t *VAR_6)
{
 int VAR_7;

 if (VAR_2->flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3,
           VAR_4, VAR_5, VAR_6);
 FUNC_2();
 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3();
 return VAR_7;
}
