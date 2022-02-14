
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swconfig_callback {scalar_t__ (* fill ) (struct swconfig_callback*,void*) ;scalar_t__ (* close ) (struct swconfig_callback*,void*) ;int * msg; struct genl_info* info; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct genl_info*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct swconfig_callback*,void*) ;
 scalar_t__ FUNC_4 (struct swconfig_callback*,void*) ;

__attribute__((used)) static int
FUNC_5(struct swconfig_callback *VAR_2, void *VAR_3)
{
 struct genl_info *VAR_4 = VAR_2->info;
 int VAR_5 = 0;
 int VAR_6;

 do {
  if (!VAR_2->msg) {
   VAR_2->msg = FUNC_2(VAR_1, VAR_0);
   if (VAR_2->msg == ((void*)0))
    goto error;
  }

  if (!(VAR_2->fill(VAR_2, VAR_3) < 0))
   break;


  if (VAR_5)
   goto error;


  VAR_5 = 1;
  if (VAR_2->close) {
   if (VAR_2->close(VAR_2, VAR_3) < 0)
    goto error;
  }
  VAR_6 = FUNC_0(VAR_2->msg, VAR_4);
  VAR_2->msg = ((void*)0);
  if (VAR_6 < 0)
   goto error;

 } while (VAR_5);

 return 0;

error:
 if (VAR_2->msg)
  FUNC_1(VAR_2->msg);
 return -1;
}
