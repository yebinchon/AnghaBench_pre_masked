
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WRes ;
typedef int UInt16 ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef int CSzFile ;
typedef TYPE_1__ CBuf ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int const*,int) ;
 int VAR_0 ;

__attribute__((used)) static WRes FUNC_6(CSzFile *VAR_1, const UInt16 *VAR_2)
{



  CBuf VAR_3;
  WRes VAR_4;
  FUNC_1(&VAR_3);
  FUNC_4(FUNC_5(&VAR_3, VAR_2, 1));
  VAR_4 = FUNC_2(VAR_1, (const char *)VAR_3.data);
  FUNC_0(&VAR_3, &VAR_0);
  return VAR_4;

}
