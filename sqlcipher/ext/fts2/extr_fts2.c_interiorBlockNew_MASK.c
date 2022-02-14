
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_5__ {int data; int term; } ;
typedef TYPE_1__ InteriorBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,int) ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static InteriorBlock *FUNC_5(int VAR_2, sqlite_int64 VAR_3,
                                       const char *VAR_4, int VAR_5){
  InteriorBlock *VAR_6 = FUNC_4(sizeof(InteriorBlock));
  char VAR_7[VAR_1+VAR_1];
  int VAR_8;

  if( VAR_6 ){
    FUNC_2(VAR_6, 0, sizeof(*VAR_6));
    FUNC_0(&VAR_6->term, 0);
    FUNC_1(&VAR_6->term, VAR_4, VAR_5);

    VAR_8 = FUNC_3(VAR_7, VAR_2);
    VAR_8 += FUNC_3(VAR_7+VAR_8, VAR_3);
    FUNC_0(&VAR_6->data, VAR_0);
    FUNC_1(&VAR_6->data, VAR_7, VAR_8);
  }
  return VAR_6;
}
