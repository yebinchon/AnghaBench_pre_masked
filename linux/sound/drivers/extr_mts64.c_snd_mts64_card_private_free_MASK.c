
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct mts64* private_data; } ;
struct pardevice {int dummy; } ;
struct mts64 {struct pardevice* pardev; } ;


 int FUNC_0 (struct pardevice*) ;
 int FUNC_1 (struct pardevice*) ;
 int FUNC_2 (struct mts64*) ;

__attribute__((used)) static void FUNC_3(struct snd_card *VAR_0)
{
 struct mts64 *VAR_1 = VAR_0->private_data;
 struct pardevice *VAR_2 = VAR_1->pardev;

 if (VAR_2) {
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }

 FUNC_2(VAR_1);
}
