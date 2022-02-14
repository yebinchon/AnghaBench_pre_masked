
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct hdsp* private_data; } ;
struct hdsp {int dummy; } ;


 int FUNC_0 (struct hdsp*) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_0)
{
 struct hdsp *VAR_1 = VAR_0->private_data;

 if (VAR_1)
  FUNC_0(VAR_1);
}
