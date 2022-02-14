
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
struct buf_file_priv {int fd; } ;
typedef int RBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct buf_file_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static ut64 FUNC_2(RBuffer *VAR_3) {
 struct buf_file_priv *VAR_4 = FUNC_0 (VAR_3);
 int VAR_5 = FUNC_1 (VAR_4->fd, 0, VAR_0);
 int VAR_6 = FUNC_1 (VAR_4->fd, 0, VAR_1);
 FUNC_1 (VAR_4->fd, VAR_5, VAR_2);
 return (ut64)VAR_6;
}
