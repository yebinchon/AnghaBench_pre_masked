
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_element {int priv_data; int tlv_data; } ;
struct snd_kcontrol {struct user_element* private_data; } ;


 int FUNC_0 (struct user_element*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_kcontrol *VAR_0)
{
 struct user_element *VAR_1 = VAR_0->private_data;

 FUNC_1(VAR_1->tlv_data);
 FUNC_1(VAR_1->priv_data);
 FUNC_0(VAR_1);
}
