
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt_compiland {int dummy; } ;
struct msc_debug_info {int module; } ;
struct location {unsigned int offset; scalar_t__ reg; int kind; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct msc_debug_info const*,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,struct symt_compiland*,char const*,scalar_t__,struct location,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(const struct msc_debug_info* VAR_3,
                                         struct symt_compiland* VAR_4,
                                         const char* VAR_5,
                                         unsigned VAR_6, unsigned VAR_7,
                                         unsigned VAR_8, BOOL VAR_9, BOOL VAR_10, BOOL VAR_11)
{
    if (VAR_5 && *VAR_5)
    {
        struct location VAR_12;

        VAR_12.kind = VAR_10 ? VAR_2 : VAR_1;
        VAR_12.reg = 0;
        VAR_12.offset = VAR_10 ? VAR_7 : FUNC_0(VAR_3, VAR_6, VAR_7);
        if (VAR_11 || VAR_10 || !FUNC_2(VAR_3->module, VAR_12.offset))
        {
            FUNC_3(VAR_3->module, VAR_4,
                                     VAR_5, VAR_9, VAR_12, 0,
                                     FUNC_1(VAR_8, VAR_0));
        }
    }
}
