
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (void*) ;
 void* VAR_3 ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(const struct firmware *VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 bool VAR_7 = 1;
 void *VAR_8;

 if (!VAR_4) {
  FUNC_4("failed to load regulatory.db\n");
  VAR_6 = -VAR_1;
 } else if (!FUNC_10(VAR_4->data, VAR_4->size)) {
  FUNC_4("loaded regulatory.db is malformed or signature is missing/invalid\n");
  VAR_6 = -VAR_0;
 }

 FUNC_8();
 if (VAR_3 && !FUNC_1(VAR_3)) {






 } else if (VAR_6) {
  VAR_3 = FUNC_0(VAR_6);
 } else if (VAR_4) {
  VAR_8 = FUNC_3(VAR_4->data, VAR_4->size, VAR_2);
  if (VAR_8) {
   VAR_3 = VAR_8;
   VAR_7 = VAR_5 && FUNC_5(VAR_5);
  } else {
   VAR_7 = 1;
  }
 }

 if (VAR_7)
  FUNC_7(1, 0);

 FUNC_9();

 FUNC_2(VAR_5);

 FUNC_6(VAR_4);
}
