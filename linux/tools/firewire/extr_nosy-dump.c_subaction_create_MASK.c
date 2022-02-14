
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct subaction {size_t length; int packet; int ack; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct subaction* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static struct subaction *
FUNC_3(uint32_t *VAR_1, size_t VAR_2)
{
 struct subaction *VAR_3;


 VAR_3 = FUNC_1(sizeof *VAR_3 - sizeof VAR_3->packet + VAR_2);
 if (!VAR_3)
  FUNC_0(VAR_0);
 VAR_3->ack = VAR_1[VAR_2 / 4 - 1];
 VAR_3->length = VAR_2;
 FUNC_2(&VAR_3->packet, VAR_1, VAR_2);

 return VAR_3;
}
