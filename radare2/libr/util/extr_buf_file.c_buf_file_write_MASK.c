
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
struct buf_file_priv {int fd; } ;
typedef int st64 ;
typedef int RBuffer ;


 struct buf_file_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ,int const*,int ) ;

__attribute__((used)) static st64 FUNC_2(RBuffer *VAR_0, const ut8 *VAR_1, ut64 VAR_2) {
 struct buf_file_priv *VAR_3 = FUNC_0 (VAR_0);
 return FUNC_1 (VAR_3->fd, VAR_1, VAR_2);
}
