
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int size; int data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ,int ) ;
 TYPE_1__* VAR_3 ;
 void* VAR_4 ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(void)
{
 const struct firmware *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(&VAR_5, "regulatory.db", &VAR_3->dev);
 if (VAR_7)
  return VAR_7;

 if (!FUNC_7(VAR_5->data, VAR_5->size)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_5->data, VAR_5->size, VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto out;
 }

 FUNC_5();
 if (!FUNC_0(VAR_4))
  FUNC_1(VAR_4);
 VAR_4 = VAR_6;
 FUNC_6();

 out:
 FUNC_3(VAR_5);
 return VAR_7;
}
