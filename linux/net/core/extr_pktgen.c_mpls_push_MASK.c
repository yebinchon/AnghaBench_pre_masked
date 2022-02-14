
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_dev {unsigned int nr_labels; int* labels; } ;
typedef int __be32 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(__be32 *VAR_1, struct pktgen_dev *VAR_2)
{
 unsigned int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->nr_labels; VAR_3++)
  *VAR_1++ = VAR_2->labels[VAR_3] & ~VAR_0;

 VAR_1--;
 *VAR_1 |= VAR_0;
}
