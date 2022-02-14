
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_message {int source; int data; } ;
struct drop_t {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct skynet_message *VAR_1, void *VAR_2) {
 struct drop_t *VAR_3 = VAR_2;
 FUNC_1(VAR_1->data);
 uint32_t VAR_4 = VAR_3->handle;
 FUNC_0(VAR_4);

 FUNC_2(((void*)0), VAR_4, VAR_1->source, VAR_0, 0, ((void*)0), 0);
}
