
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct snd_compr*) ;

int FUNC_4(struct snd_compr *VAR_1)
{
 FUNC_2("Removing compressed device %s\n", VAR_1->name);
 FUNC_0(&VAR_0);
 FUNC_3(VAR_1);
 FUNC_1(&VAR_0);
 return 0;
}
