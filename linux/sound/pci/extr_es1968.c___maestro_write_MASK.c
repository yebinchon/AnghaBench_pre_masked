
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct es1968 {size_t* maestro_map; scalar_t__ io_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct es1968 *VAR_2, u16 VAR_3, u16 VAR_4)
{
 FUNC_0(VAR_3, VAR_2->io_port + VAR_1);
 FUNC_0(VAR_4, VAR_2->io_port + VAR_0);
 VAR_2->maestro_map[VAR_3] = VAR_4;
}
