
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char* argument; int to_be_done; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(char *VAR_4, u32 VAR_5)
{



 VAR_1[VAR_2].argument = VAR_4;
 VAR_1[VAR_2].to_be_done = VAR_5;

 VAR_2++;
 if (VAR_2 > VAR_0) {
  FUNC_0(VAR_3, "Too many table options (max %zu)\n",
   VAR_0);
  return (-1);
 }

 return (0);
}
