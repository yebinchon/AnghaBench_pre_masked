
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct perf_session *VAR_7)
{
 int VAR_8;

 for (VAR_8 = VAR_4; VAR_8 < VAR_5; VAR_8++)
  FUNC_1(&VAR_7->header, VAR_8);

 FUNC_0(&VAR_7->header, VAR_3);
 FUNC_0(&VAR_7->header, VAR_2);
 FUNC_0(&VAR_7->header, VAR_6);
 FUNC_0(&VAR_7->header, VAR_1);
 FUNC_0(&VAR_7->header, VAR_0);
}
