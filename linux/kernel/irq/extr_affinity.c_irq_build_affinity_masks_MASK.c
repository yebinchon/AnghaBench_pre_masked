
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_affinity_desc {int dummy; } ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int *,int ,int ,struct irq_affinity_desc*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(unsigned int VAR_4, unsigned int VAR_5,
        unsigned int VAR_6,
        struct irq_affinity_desc *VAR_7)
{
 unsigned int VAR_8 = VAR_4, VAR_9 = 0, VAR_10 = 0;
 cpumask_var_t *VAR_11;
 cpumask_var_t VAR_12, VAR_13;
 int VAR_14 = -VAR_0;

 if (!FUNC_9(&VAR_12, VAR_1))
  return VAR_14;

 if (!FUNC_9(&VAR_13, VAR_1))
  goto fail_nmsk;

 VAR_11 = FUNC_2();
 if (!VAR_11)
  goto fail_npresmsk;


 FUNC_7();
 FUNC_3(VAR_11);


 VAR_14 = FUNC_1(VAR_8, VAR_5, VAR_6,
      VAR_11, VAR_3,
      VAR_12, VAR_7);
 if (VAR_14 < 0)
  goto fail_build_affinity;
 VAR_9 = VAR_14;







 if (VAR_9 >= VAR_5)
  VAR_8 = VAR_6;
 else
  VAR_8 = VAR_6 + VAR_9;
 FUNC_4(VAR_13, VAR_2, VAR_3);
 VAR_14 = FUNC_1(VAR_8, VAR_5, VAR_6,
      VAR_11, VAR_13, VAR_12,
      VAR_7);
 if (VAR_14 >= 0)
  VAR_10 = VAR_14;

 fail_build_affinity:
 FUNC_8();

 if (VAR_14 >= 0)
  FUNC_0(VAR_9 + VAR_10 < VAR_5);

 FUNC_6(VAR_11);

 fail_npresmsk:
 FUNC_5(VAR_13);

 fail_nmsk:
 FUNC_5(VAR_12);
 return VAR_14 < 0 ? VAR_14 : 0;
}
