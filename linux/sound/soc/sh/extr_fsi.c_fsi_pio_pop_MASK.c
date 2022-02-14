
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_stream {int buff_sample_capa; int buff_sample_pos; } ;
struct fsi_priv {int dummy; } ;


 int FUNC_0 (struct fsi_priv*,struct fsi_stream*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fsi_priv*,struct fsi_stream*,int ,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct fsi_priv *VAR_2, struct fsi_stream *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 VAR_5 = VAR_3->buff_sample_capa - VAR_3->buff_sample_pos;

 VAR_6 = FUNC_2(VAR_4, VAR_5);

 return FUNC_1(VAR_2, VAR_3,
      VAR_0,
      VAR_1,
      VAR_6);
}
