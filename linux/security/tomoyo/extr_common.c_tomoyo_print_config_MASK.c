
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_io_buffer {int dummy; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct tomoyo_io_buffer*,char*,int ,int ,int ) ;
 int * VAR_2 ;
 int FUNC_1 (int const) ;

__attribute__((used)) static void FUNC_2(struct tomoyo_io_buffer *VAR_3, const u8 VAR_4)
{
 FUNC_0(VAR_3, "={ mode=%s grant_log=%s reject_log=%s }\n",
    VAR_2[VAR_4 & 3],
    FUNC_1(VAR_4 & VAR_0),
    FUNC_1(VAR_4 & VAR_1));
}
