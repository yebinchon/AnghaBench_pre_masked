
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf_file_priv {int fd; } ;
typedef int st64 ;
typedef int RBuffer ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct buf_file_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static st64 FUNC_2(RBuffer *VAR_3, st64 VAR_4, int VAR_5) {
 struct buf_file_priv *VAR_6 = FUNC_0 (VAR_3);
 switch (VAR_5) {
 case 130: VAR_5 = VAR_0; break;
 case 128: VAR_5 = VAR_2; break;
 case 129: VAR_5 = VAR_1; break;
 }
 return FUNC_1 (VAR_6->fd, VAR_4, VAR_5);
}
