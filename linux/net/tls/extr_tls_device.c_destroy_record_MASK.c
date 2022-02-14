
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_record_info {int num_frags; int * frags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tls_record_info*) ;

__attribute__((used)) static void FUNC_2(struct tls_record_info *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_frags; VAR_1++)
  FUNC_0(&VAR_0->frags[VAR_1]);
 FUNC_1(VAR_0);
}
