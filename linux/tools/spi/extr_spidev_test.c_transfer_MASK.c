
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct spi_ioc_transfer {unsigned long tx_buf; unsigned long rx_buf; size_t len; int tx_nbits; int rx_nbits; int bits_per_word; int speed_hz; int delay_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int const*,size_t,int,char*) ;
 int FUNC_3 (int,int ,struct spi_ioc_transfer*) ;
 int VAR_10 ;
 int FUNC_4 (scalar_t__,int,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (char*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int,int const*,size_t) ;

__attribute__((used)) static void FUNC_7(int VAR_14, uint8_t const *VAR_15, uint8_t const *VAR_16, size_t VAR_17)
{
 int VAR_18;
 int VAR_19;
 struct spi_ioc_transfer VAR_20 = {
  .tx_buf = (unsigned long)VAR_15,
  .rx_buf = (unsigned long)VAR_16,
  .len = VAR_17,
  .delay_usecs = VAR_9,
  .speed_hz = VAR_12,
  .bits_per_word = VAR_8,
 };

 if (VAR_10 & VAR_7)
  VAR_20.tx_nbits = 4;
 else if (VAR_10 & VAR_6)
  VAR_20.tx_nbits = 2;
 if (VAR_10 & VAR_5)
  VAR_20.rx_nbits = 4;
 else if (VAR_10 & VAR_4)
  VAR_20.rx_nbits = 2;
 if (!(VAR_10 & VAR_3)) {
  if (VAR_10 & (VAR_7 | VAR_6))
   VAR_20.rx_buf = 0;
  else if (VAR_10 & (VAR_5 | VAR_4))
   VAR_20.tx_buf = 0;
 }

 VAR_18 = FUNC_3(VAR_14, FUNC_0(1), &VAR_20);
 if (VAR_18 < 1)
  FUNC_5("can't send spi message");

 if (VAR_13)
  FUNC_2(VAR_15, VAR_17, 32, "TX");

 if (VAR_11) {
  VAR_19 = FUNC_4(VAR_11, VAR_2 | VAR_0 | VAR_1, 0666);
  if (VAR_19 < 0)
   FUNC_5("could not open output file");

  VAR_18 = FUNC_6(VAR_19, VAR_16, VAR_17);
  if (VAR_18 != VAR_17)
   FUNC_5("not all bytes written to output file");

  FUNC_1(VAR_19);
 }

 if (VAR_13)
  FUNC_2(VAR_16, VAR_17, 32, "RX");
}
