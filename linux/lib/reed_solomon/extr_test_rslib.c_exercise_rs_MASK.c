
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wspace {int dummy; } ;
struct rs_control {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rs_control*,struct wspace*,int,int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct rs_control *VAR_3, struct wspace *VAR_4,
         int VAR_5, int VAR_6)
{

 int VAR_7 = 0;
 int VAR_8;

 if (VAR_2 >= VAR_1)
  FUNC_1("Testing up to error correction capacity...\n");

 for (VAR_8 = 0; VAR_8 <= VAR_0; VAR_8++)
  VAR_7 |= FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);

 return VAR_7;
}
