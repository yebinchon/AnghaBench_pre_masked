
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int protocol; scalar_t__ length; int banner; struct BannerOutput* next; } ;
struct TCP_Control_Block {struct BannerOutput banout; int ttl; int port_them; int ip_them; } ;
struct TCP_ConnectionTable {int out; int (* report_banner ) (int ,int ,int ,int,int ,int,int ,int ,scalar_t__) ;} ;


 int FUNC_0 (struct BannerOutput*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int,int ,int,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct TCP_ConnectionTable *VAR_1, struct TCP_Control_Block *VAR_2)
{
    struct BannerOutput *VAR_3;





    for (VAR_3 = &VAR_2->banout; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
        if (VAR_3->length && VAR_3->protocol) {
            VAR_1->report_banner(
                                  VAR_1->out,
                                  VAR_0,
                                  VAR_2->ip_them,
                                  6,
                                  VAR_2->port_them,
                                  VAR_3->protocol & 0x0FFFFFFF,
                                  VAR_2->ttl,
                                  VAR_3->banner,
                                  VAR_3->length);
        }
    }




    FUNC_0(&VAR_2->banout);

}
