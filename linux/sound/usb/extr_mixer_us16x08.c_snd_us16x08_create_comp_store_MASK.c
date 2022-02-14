
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_us16x08_comp_store {int** val; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct snd_us16x08_comp_store* FUNC_1 (int,int ) ;

__attribute__((used)) static struct snd_us16x08_comp_store *FUNC_2(void)
{
 int VAR_8;
 struct snd_us16x08_comp_store *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_9->val[FUNC_0(VAR_6)][VAR_8]
   = 0x20;
  VAR_9->val[FUNC_0(VAR_3)][VAR_8] = 0x00;
  VAR_9->val[FUNC_0(VAR_2)][VAR_8] = 0x00;
  VAR_9->val[FUNC_0(VAR_5)][VAR_8] = 0x00;
  VAR_9->val[FUNC_0(VAR_1)][VAR_8] = 0x00;
  VAR_9->val[FUNC_0(VAR_4)][VAR_8] = 0x00;
 }
 return VAR_9;
}
