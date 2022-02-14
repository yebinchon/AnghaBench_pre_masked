
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_data {int len; int bytes; int packet; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct test_data *VAR_0)
{
 FUNC_1("Decoding failed!\n");
 FUNC_1("Decoding:  ");
 FUNC_0(&VAR_0->packet, VAR_0->bytes, VAR_0->len);
}
