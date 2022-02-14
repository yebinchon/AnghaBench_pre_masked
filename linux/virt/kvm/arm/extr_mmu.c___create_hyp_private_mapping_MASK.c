
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 unsigned long FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ,unsigned long,unsigned long,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(phys_addr_t VAR_6, size_t VAR_7,
     unsigned long *VAR_8, pgprot_t VAR_9)
{
 pgd_t *VAR_10 = VAR_3;
 unsigned long VAR_11;
 int VAR_12 = 0;

 FUNC_6(&VAR_5);
 VAR_7 = FUNC_1(VAR_7 + FUNC_8(VAR_6));
 VAR_11 = VAR_4 - VAR_7;






 if ((VAR_11 ^ VAR_4) & FUNC_0(VAR_1 - 1))
  VAR_12 = -VAR_0;
 else
  VAR_4 = VAR_11;

 FUNC_7(&VAR_5);

 if (VAR_12)
  goto out;

 if (FUNC_3())
  VAR_10 = VAR_2;

 VAR_12 = FUNC_2(VAR_10, FUNC_4(),
        VAR_11, VAR_11 + VAR_7,
        FUNC_5(VAR_6), VAR_9);
 if (VAR_12)
  goto out;

 *VAR_8 = VAR_11 + FUNC_8(VAR_6);

out:
 return VAR_12;
}
