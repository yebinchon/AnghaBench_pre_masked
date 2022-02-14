
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
struct buf_file_priv {int fd; } ;
typedef int RBuffer ;


 struct buf_file_priv* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0, ut64 VAR_1) {
 struct buf_file_priv *VAR_2 = FUNC_0 (VAR_0);
 return FUNC_1 (VAR_2->fd, VAR_1) >= 0;
}
