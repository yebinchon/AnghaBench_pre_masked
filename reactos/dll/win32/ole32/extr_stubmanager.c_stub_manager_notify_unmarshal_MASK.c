
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_manager {int lock; scalar_t__ norm_refs; } ;
struct ifstub {int flags; } ;
typedef int IPID ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int const*) ;
 struct ifstub* FUNC_4 (struct stub_manager*,int const*) ;

BOOL FUNC_5(struct stub_manager *VAR_3, const IPID *VAR_4)
{
    BOOL VAR_5 = VAR_2;
    struct ifstub *VAR_6;

    if (!(VAR_6 = FUNC_4(VAR_3, VAR_4)))
    {
        FUNC_0("attempted unmarshal of unknown IPID %s\n", FUNC_3(VAR_4));
        return VAR_0;
    }

    FUNC_1(&VAR_3->lock);


    if (VAR_6->flags & VAR_1)
    {
        if (VAR_3->norm_refs)
            VAR_3->norm_refs--;
        else
        {
            FUNC_0("attempted invalid normal unmarshal, norm_refs is zero\n");
            VAR_5 = VAR_0;
        }
    }

    FUNC_2(&VAR_3->lock);

    return VAR_5;
}
