
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setproperty_request {int data; int format; } ;
struct m_option {int dummy; } ;


 struct m_option* FUNC_0 (int ) ;
 int FUNC_1 (struct m_option const*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct setproperty_request *VAR_1 = VAR_0;
    const struct m_option *VAR_2 = FUNC_0(VAR_1->format);
    FUNC_1(VAR_2, VAR_1->data);
}
