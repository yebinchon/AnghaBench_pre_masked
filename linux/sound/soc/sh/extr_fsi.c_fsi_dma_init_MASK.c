
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_stream {int bus_option; } ;
struct fsi_priv {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct fsi_priv *VAR_2, struct fsi_stream *VAR_3)
{




 VAR_3->bus_option = FUNC_0(24, VAR_1) |
    FUNC_0(16, VAR_0);

 return 0;
}
