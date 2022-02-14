
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adm6996_priv {int (* write ) (struct adm6996_priv*,int,int ) ;} ;
typedef enum admreg { ____Placeholder_admreg } admreg ;


 int FUNC_0 (struct adm6996_priv*,int,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct adm6996_priv *VAR_0, enum admreg VAR_1, u16 VAR_2)
{
 VAR_0->write(VAR_0, VAR_1, VAR_2);
}
