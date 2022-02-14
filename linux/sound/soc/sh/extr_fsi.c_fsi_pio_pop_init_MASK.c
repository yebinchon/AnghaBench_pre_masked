
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_stream {int bus_option; } ;
struct fsi_priv {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct fsi_priv *VAR_1, struct fsi_stream *VAR_2)
{



 VAR_2->bus_option = FUNC_0(24, VAR_0) |
    FUNC_0(16, VAR_0);
 return 0;
}
