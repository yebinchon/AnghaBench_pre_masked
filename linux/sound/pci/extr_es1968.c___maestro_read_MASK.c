
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct es1968 {int* maestro_map; scalar_t__ io_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static u16 FUNC_2(struct es1968 *VAR_3, u16 VAR_4)
{
 if (VAR_2 & (1 << VAR_4)) {
  FUNC_1(VAR_4, VAR_3->io_port + VAR_1);
  VAR_3->maestro_map[VAR_4] = FUNC_0(VAR_3->io_port + VAR_0);
 }
 return VAR_3->maestro_map[VAR_4];
}
